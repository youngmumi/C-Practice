#include <iostream>
#include <string>
#include <time.h>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

class Tile {
	public:
		bool open;
		int number;
};

const int BOMB = 9;
const int HIDDEN = 10;

int main(){
	srand(time(NULL));
	RenderWindow app(VideoModde(400, 400), "Minesweeper");
	
	Tile grid[12][12];
	bool game_ended = false;
	
	Sprite sprites[12];
	Texture t[12];
	for (int k=0; k<12; k++){
		t[k].loadFromFile("images/tile"+to_string(k)+".png");
		sprites[k].setTexture(t[k]);
	}
	
	for(int i=1; i<=10; i++){
		for (int j=1; j<=10; j++){
			grid[i][j].open = false;
			grid[i][j].number = 0;
			if ((rand() % 10) == 1)
				grid[i][j].number = BOMB;
		}
	}
	
	for (int i=1; i<=10; i++){
		for(int j=0; j<=10; j++){
			int n = 0;
			if (grid[i][j].number == BOMB) continue;
			if (grid[i+1][j].number == BOMB) n++;
			if (grid[i][j+1].number == BOMB) n++;
			if (grid[i-1][j].number == BOMB) n++;
			if (grid[i][j-1].number == BOMB) n++;
			if (grid[i+1][j+1].number == BOMB) n++;
			if (grid[i-1][j+1].number == BOMB) n++;
			if (grid[i-1][j+1].number == BOMB) n++;
			if (grid[i+1][j-1].number == BOMB) n++;
			grid[i][j].number = n;
		}
	}
	
	while (app.isOpen()){
		Vector2i pos = Mouse::getPosition(app);
		int x = pos.x / TILE_SIZE;
		int y = pos.y / TILE_SIZE;
		
		Event e;
		while (app.pollEvent(e)){
			if (e.type == Event::Closed)
				app.close();
				
			if (e.type == Event::MouseButtonPressed)
				if (e.key == Mouse::Left){
					grid[x][y].open = true;
					if (grid[x][y].number == BOMB) game_ended = true;
				}
		}
		
		app.clear(Color::White);
		for(int i=1; i<=10; i++){
			for(int j=1; j<=10; j++){
				int n;
				if(grid[i][j].open == false && game_ended == false)
					n = HIDDEN;
				else
					n = grid[i][j].number;
				sprites[n].setPosition(TILE_SIZE * 1, TILE_SIZE * j);
				app.draw(sprites[n]);
			}
		}
		
		app.display();
	}
	
	return 0;
}

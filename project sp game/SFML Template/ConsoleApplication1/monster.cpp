#include"newheader.h"
void game::monster::start(Vector2f position,Vector2f point1, Vector2f point2) {
	monsterposition = position;
	pointA = point1;
	pointB = point2;
	target = pointB;
	monsterwalk.loadFromFile("../assests/main menu/orc3_walk_full.png");
	monsteridle.loadFromFile("../assests/main menu/orc3_idle_full.png");
	monsterrun.loadFromFile("../assests/main menu/orc3_run_full.png");
	monsterattack.loadFromFile("../assests/main menu/orc3_attack_full.png");


	


}
void game::monster::update(Sprite& player,Clock&clock) {
	player.setScale(2, 2);
	timer= clock.restart().asSeconds();
	Vector2f distancebetweenthem = player.getPosition() - monstersprite.getPosition();
	float length = sqrt(pow(distancebetweenthem.x, 2) + pow(distancebetweenthem.y, 2));
	monstersprite.setScale(3, 3);
	monstersprite.setOrigin(32, 32);
	if (length > 300.0f)
	{
		idle();
	}
	else if (length > 100.0f) {
		run(distancebetweenthem, length, player);
	
	}
	else if (length > 50.0f)
	{
		attack(player);
	
	}
	if (makedamage(player,length))
		cout << "yes";   //put the function  that the player take damage
	
}





void game::monster::idle() {

	Vector2f direction = target - monsterposition;
	float length = sqrt(pow(direction.x, 2) + pow(direction.y, 2));
	direction = Vector2f(direction.x / length, direction.y / length);
	if (direction.x < 0)
		monstersprite.setScale(-3, 3);
	else
		monstersprite.setScale(3, 3);

	if (iswaiting) {
		timepassed += timer;
		monstersprite.setTexture(monsteridle);
		monstersprite.setTextureRect(IntRect(0* 64, 3 * 64, 64, 64));
		


		if (timepassed >= timetowait)
		{
			iswaiting = false;
			timepassed = 0;

			if (target == pointB)
				target = pointA; //to reverse the direction
			// to reverse his body too

			else
				target = pointB;
		}
	}
	else {
		
		monsterposition += direction * monstervelocity * timer;
		

		monstersprite.setPosition(monsterposition);
		if (abs(target.x - monsterposition.x) < 5 && abs(target.y - monsterposition.y) < 5) {
			iswaiting = true;
		}
		monstersprite.setTexture(monsterwalk);
		monstersprite.setTextureRect(IntRect(indexrow * 64, 3 * 64, 64, 64));
		indexrow = (indexrow + 1) % 6;

	}
}
void game::monster:: run(Vector2f&distancebetweenthem,float&length,Sprite&player) {

	
	distancebetweenthem = Vector2f(distancebetweenthem.x / length, distancebetweenthem.y / length);
    monsterposition += distancebetweenthem * monstervelocity * timer;
     monstersprite.setPosition(monsterposition);
	 monstersprite.setTexture(monsterrun);
	 if(player.getPosition().x>monstersprite.getPosition().x)
	 monstersprite.setTextureRect(IntRect(indexrun * 64, 3 * 64, 64, 64));
	 else
		 monstersprite.setTextureRect(IntRect(indexrun * 64, 2 * 64, 64, 64));
	 indexrun = (indexrun + 1) % 6;
}
void game::monster::attack(Sprite&player) {
	monstersprite.setTexture(monsterattack);
	if (player.getPosition().x > monstersprite.getPosition().x)
	monstersprite.setTextureRect(IntRect(indexattack * 64, 3 * 64, 64, 64));
	else
		monstersprite.setTextureRect(IntRect(indexattack * 64, 2 * 64, 64, 64));
	indexattack = (indexattack + 1) % 8;



}
bool  game::monster::makedamage(Sprite& player,float &length) {

	if (monstersprite.getGlobalBounds().intersects(player.getGlobalBounds())) {
		if (length <= 99.5) {
		
			return true ;
		}
		else
		{
			return false;
		}
	}
	return false;
	}
		
#include"newheader.h"

void game::windowresize(RenderWindow& window, View& view, bool isfullscreen) {

	Vector2u sizescreen = resolution;
	sf::Uint32 style = sf::Style::Default;  //means the size i assumed 
	if (isfullscreen)

	{
		sf::VideoMode  desktop = sf::VideoMode::getDesktopMode();
		sizescreen = Vector2u(desktop.width, desktop.height);

	}
	window.create(sf::VideoMode(sizescreen.x, sizescreen.y), "between the edges");
	backgroundsprite.setScale(sizescreen.y / backgroundtex.getSize().y, sizescreen.x / backgroundtex.getSize().x + 3);

	view.setSize(resolution.x, resolution.y);  //if the screen changed the view willnot change only show the size we want
	view.setCenter(resolution.x / 2, resolution.y / 2);  //the camera is on the center not from right or left
	float scaleX = (float)sizescreen.x / resolution.x;   //there must be AT LEast one float bec vector2u is integers 
	float scaleY = (float)sizescreen.y / resolution.y;
	float scale = std::min(scaleX, scaleY);   // we are going to change size that may affecr sprites to stretch we choose the
	//least stretch scale so not destroys the sprites shapes
	float viewshapeX = (resolution.x * scaleX) / sizescreen.x;
	float viewshapeY = (resolution.y * scaleY) / sizescreen.y;
	//here we calculte how much from the  newcreen we will take to show our sprites and animation
	   //ex
		/*newsize=(1800,1920)
	   the default (720,1280)    take smallest scale 1.5
		viewshape=(1.5*720)/1800,1.5*1280/1920
		مثلا القيمه دي لو طلعت واحد يبقي هتكون ال اشكال مناسقه مع ابعاد الشاشه غير كده بنحطها في ال نص*/
	float shiftX = (1 - viewshapeX) / 2;  //لو هنا حصل لقينا الشاشه هتبقي مش قد الابعاد هيبقي في فراغ علي الاجناب لازم نخليهم قد بعض 
	float shiftY = (1 - viewshapeY) / 2;
	view.setViewport(FloatRect(shiftX, shiftY, viewshapeX, viewshapeY));
	////هنا بقي يرسم الحاجات بتاعتنا في الحته الحسبناها سواء بقي مناسبه مع الابعاد ولا لا هيحطها دايما في مرع في النص





}
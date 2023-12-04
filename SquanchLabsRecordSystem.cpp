// SquanchLabsRecordSystem.cpp : Defines the entry point for the application.
//

#include "SquanchLabsRecordSystem.h"

using namespace std;

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);


	//PlusMinus window;

	//SimpleMenu window;

	//AdditionalMenu window;

//	ToolBar window;

	//Checkable window;

	Skeleton window;

	
	window.resize(250, 150);
	window.setWindowTitle("Login");
	window.show();


	return app.exec();
}

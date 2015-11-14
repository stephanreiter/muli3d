
#include "app.h"
#include "resource.h"

#ifdef WIN32
int APIENTRY WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow )
#else
int main(int argc, char** argv)
#endif
{
	tCreationFlags creationFlags;
	creationFlags.sWindowTitle = "Crystal";

	int32 iWidth = 400;
	int32 iHeight = 300;

	#ifndef WIN32
	if ( argc == 3 )
	{
		iWidth = iClamp( atoi( argv[1] ), 160, 1600 );
		iHeight = iClamp( atoi( argv[2] ), 160, 1280 );		
	}
	#endif

	#ifdef WIN32
	creationFlags.hIcon = LoadIcon( GetModuleHandle( 0 ), MAKEINTRESOURCE( IDI_ICON1 ) );
	#endif
	
	creationFlags.iWindowWidth = iWidth;
	creationFlags.iWindowHeight = iHeight;
	creationFlags.bWindowed = true;

	CApp theApp;
	if( !theApp.bInitialize( creationFlags ) )
		return 1;

	return theApp.iRun();
}

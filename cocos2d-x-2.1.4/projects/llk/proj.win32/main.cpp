#include "main.h"
#include "AppDelegate.h"
#include "CCEGLView.h"
#include "../Classes/GameScene.h"

USING_NS_CC;

int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // create the application instance
    AppDelegate app;
    CCEGLView* eglView = CCEGLView::sharedOpenGLView();
    eglView->setViewName("HelloCpp");
    eglView->setFrameSize(640, 1136);
	eglView->setFrameZoomFactor(0.7f);
    return CCApplication::sharedApplication()->run();
}

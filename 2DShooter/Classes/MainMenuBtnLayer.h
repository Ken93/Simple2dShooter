#ifndef __MAINMENU_BUTTONS_LAYER_H_
#define __MAINMENU_BUTTONS_LAYER_H_

#include "cocos2d.h"
#include "GameManager.h"
#include "Constants.h"

USING_NS_CC;

class MainMenuBtnLayer : public CCLayer
{
public:
	/* Constructor
	*/
	MainMenuBtnLayer();

	/* Destructor
	*/
	~MainMenuBtnLayer();
	
	/* Initialise
	*/
	bool init();
	
	/* Implement the "static node()" method manually
	*/
	CREATE_FUNC(MainMenuBtnLayer);
private:

	/* A selector callback
	   @param _sender: Any object that is selected
	*/
	void menucallback(CCObject *_sender);
};

#endif
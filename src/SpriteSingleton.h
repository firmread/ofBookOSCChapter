//
//  SpriteSingleton.h
//  OfBookOsc
//
//  Created by Phoenix Perry on 3/8/14.
//
//
#pragma once
#include "ofMain.h"
#include "ofxSpriteSheetRenderer.h"


class SpriteSingleton{
private:
    static SpriteSingleton* getInstance();
        static void makeSprites();
public:
    ofxSpriteSheetRenderer *spriteRenderer;	// our spriteRenderer

    static bool instanceFlag;
    static SpriteSingleton *single;
    ofxSpriteSheetRenderer* getSheet();
    
    SpriteSingleton(){}
    
    ~SpriteSingleton(){
        instanceFlag = false;
        delete spriteRenderer;
    }
};

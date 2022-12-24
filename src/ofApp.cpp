#include "ofApp.h"
#include <format>

constexpr int screen_width = 400;
constexpr int screen_height = 300;

static int colorRed = 255;
static int colorGreen = 0;
static int colorBlue = 255;
static int posX = 10;
static int posY = 10;

//--------------------------------------------------------------
void ofApp::setup(){
	// Change the Window Shape
	ofSetWindowShape(screen_width, screen_height);

	// Enable AntiAliasing if supported
	ofEnableAntiAliasing();

	// Circles are just regular polygons so more resolution is better circles
	ofSetCircleResolution(50);

	// When you don't want OF to erase your screen automatically
	ofSetBackgroundAuto(false);
	
	// Set the max FPS
	ofSetFrameRate(30);

	// Erase in black
	ofBackground(ofColor::black);

}

//--------------------------------------------------------------
void ofApp::update(){

	posX = ofRandomWidth();
	posY = ofRandomHeight();
	colorBlue = ofRandom(255);
	colorRed = ofRandom(255);
}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetColor(colorRed, colorGreen,colorBlue, 10);
	ofFill();
	ofDrawCircle(posX, posY, 10);
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == ' ')
		ofBackground(ofColor::black);

	if (key == 's') {
		glReadBuffer(GL_FRONT); // HACK: only needed on windows, when using ofSetAutoBackground(false)
		ofSaveScreen(std::format("screen_{}.png", ofRandom(10000, 100000)));
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

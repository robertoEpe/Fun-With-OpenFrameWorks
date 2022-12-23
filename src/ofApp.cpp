#include "ofApp.h"

constexpr int screen_width = 400;
constexpr int screen_height = 300;

static int squareSize;
static int lineWidth;

static int circleX = 20;

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

	// Load an image at bin/data/asdf1.png
    image.load("asdf1.png");
}

//--------------------------------------------------------------
void ofApp::update(){

	lineWidth = ofRandom(4, 28);
	squareSize = ofRandom(5, 250);
}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetRectMode(OF_RECTMODE_CENTER);
	ofSetColor(0, 255, 0, 10);
	ofFill();
	ofDrawRectangle(screen_width/2, screen_height/2, squareSize, squareSize);

	ofSetColor(0, 0, 255, 10);
	ofNoFill();
	ofSetLineWidth(lineWidth);
	ofDrawRectangle(screen_width / 2, screen_height / 2, squareSize, squareSize);
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == ' ')
		ofBackground(ofColor::black);
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

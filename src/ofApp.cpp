#include "ofApp.h"

constexpr int screen_width = 400;
constexpr int screen_height = 300;


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

}

//--------------------------------------------------------------
void ofApp::draw(){

	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	// Draw a red semi-transparent Ellipse at the mouse ubication
	ofSetLineWidth(1);
	ofSetColor(255, 0, 0, 50);
	ofFill();
	ofDrawEllipse(mouseX, mouseY, 10, 10);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	ofBackground(ofColor::black);
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

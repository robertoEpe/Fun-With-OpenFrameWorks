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
	ofBackground(ofColor::black);
	
	//Draw Rectangles from the center
	ofSetRectMode(OF_RECTMODE_CENTER);

	// Draw a rectangle if color blue
	ofSetColor(0,0, 255);					// Set color to red
	ofSetLineWidth(1);						// The line to 1px if any
	ofFill();								// Make it to draw filled
	ofDrawRectangle(200, 150, 150, 150);	// Draw the actual rect
	// end

	// Draw the outline of a Rectangle in green
	ofSetColor(0, 255, 0);					// Set the color to green
	ofNoFill();								// Set to just draw the outline
	ofSetLineWidth(3);						// Make the outline to 3px
	ofDrawRectangle(200, 150, 150, 150);	// Draw the rect outline on top of the other
	// end


	ofSetColor(255, 255, 255);
	image.drawSubsection(200, 150, 75, 75, 0, 0, 64, 64);

	// Draw a red semi-transparent Ellipse at the mouse ubication
	ofSetLineWidth(1);
	ofSetColor(255, 0, 0, 175);
	ofFill();
	ofDrawEllipse(mouseX, mouseY, 100, 100);
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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

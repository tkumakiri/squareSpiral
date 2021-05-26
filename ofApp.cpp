#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowPosition(1441,0);
    ofSetFullscreen(true);
    ofSetFrameRate(10);
    //ofSetWindowShape(500, 500);
    ofBackground(255, 255, 255);
    ofSetBackgroundAuto(false);
    //ofSetLineWidth(20.0);

    // double colorStart = ofRandom(0.0, 255);
    // color[0].setHsb(colorStart, 255.0, 255.0);
    // for(int i = 0; i < 2000; i++){
    //     ofColor c;
    //     c.setHsb(colorStart + (0.8 * i), 255.0, 255.0);
    //     color.push_back(c);
    // }

   square[0].set(0,0);
   square[1].set(ofGetWidth(), 0);
   square[2].set(ofGetWidth(), ofGetHeight());
   square[3].set(0, ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
    getVector();
}

//--------------------------------------------------------------
void ofApp::draw(){
    drawSquare();
}


void ofApp::drawSquare(){
    for(int i = 0; i < 4; i++){
        ofSetColor(0, 0, 0);
        ofLine(square[i].x, square[i].y, square[(i+1)%4].x, square[(i+1)%4].y);
    }
}

void ofApp::getVector(){
    for(int i = 0; i < 4; i++){
        gap = ofRandom(0.01, 0.03);
        ofVec2f sub = square[(i+1)%4] - square[i];
        ofVec2f multi = sub * gap;
        square[i] += multi;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
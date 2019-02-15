/**
 * @file FloodFilledImage.h
 * Definition for a class to do flood fill on an image
 */
#pragma once

#include "cs225/PNG.h"
#include <list>
#include <iostream>
#include <vector>
#include "colorPicker/ColorPicker.h"
#include "imageTraversal/ImageTraversal.h"

#include "Point.h"
#include "Animation.h"
using namespace std;
using namespace cs225;
/**
 *This class is used to do flood fill on an image
 */
class FloodFilledImage {
public:
  FloodFilledImage(const PNG & png);
  void addFloodFill(ImageTraversal & traversal, ColorPicker & colorPicker);
  Animation animate(unsigned frameInterval) const;

private:
	/** @todo [Part 2] */
	/** add private members here*/
  PNG png_;
  vector<PNG> frames;
  vector<ImageTraversal*> traversal_list;
  vector<ColorPicker*> colorPicker_list;
};

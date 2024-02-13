#pragma once
#include<iostream>
#include<stdio.h>
#include <cmath>
using namespace std;
struct Plural
{
	float a, b;
};
Plural Add(Plural a, Plural b);
Plural Sub(Plural a, Plural b);
Plural Mul(Plural a, Plural b);
Plural Div(Plural a, Plural b);
void Display(Plural p);
void Play(Plural p);

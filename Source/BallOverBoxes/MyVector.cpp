// Fill out your copyright notice in the Description page of Project Settings.

#include "BallOverBoxes.h"
#include "MyVector.h"
#include <cmath>

MyVector::MyVector(void)
{
	X = 0;
	Y = 0;
	Z = 0;
}



MyVector::MyVector(float Xi, float Yi, float Zi)
{
	X = Xi;
	Y = Yi;
	Z = Zi;
}

const MyVector MyVector::ZeroVector(float Xi, float Yi, float Zi)
{
	X = 0;
	Y = 0;
	Z = 0;
	return MyVector(X, Y, Z);
}

const MyVector MyVector::UpVector(float Xi, float Yi, float Zi)
{
	X = 0;
	Y = 0;
	Z = 1;
	return MyVector(X, Y, Z);
}

const MyVector MyVector::ForwardVector(float Xi, float Yi, float Zi)
{
	X = 1;
	Y = 0;
	Z = 0;
	return MyVector(X, Y, Z);
}

const MyVector MyVector::RightVector(float Xi, float Yi, float Zi)
{
	X = 0;
	Y = 1;
	Z = 0;
	return MyVector(X, Y, Z);
}

float MyVector::Magnitude(void)
{
	MagnitudeResult = sqrt(X * X + Y * Y + Z * Z);
	return MagnitudeResult;
}

MyVector MyVector::Normalize(void)
{
	MyVector normalizeVector;
	float MagnitudeResult = this->Magnitude();

	if (MagnitudeResult != 0)
	{
		normalizeVector.X = X / MagnitudeResult;
		normalizeVector.Y = Y / MagnitudeResult;
		normalizeVector.Z = Z / MagnitudeResult;
	}

	return normalizeVector;
}

MyVector & MyVector::operator+=(const MyVector & V)
{
	X += V.X;
	Y += V.Y;
	Z += V.Z;
	return *this;
}

MyVector & MyVector::operator-=(const MyVector & V)
{
	X -= V.X;
	Y -= V.Y;
	Z -= V.Z;
	return *this;
}

MyVector & MyVector::operator*=(float S)
{
	X *= S;
	Y *= S;
	Z *= S;
	return *this;
}

MyVector & MyVector::operator/=(float S)
{
	X /= S;
	Y /= S;
	Z /= S;
	return *this;
}

MyVector  MyVector::operator-(void)
{
	X = X * (-1);
	Y = Y * (-1);
	Z = Z * (-1);
	return MyVector(X, Y, Z);
}
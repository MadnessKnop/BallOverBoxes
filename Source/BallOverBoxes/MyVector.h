// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <cmath>
/**
 * 
 */
struct BALLOVERBOXES_API MyVector
{
public:
public:
	MyVector(void);
	MyVector(float Xi, float Yi, float Zi);
	float X;
	float Y;
	float Z;
	float MagnitudeResult;

	const MyVector ZeroVector(float Xi, float Yi, float Zi);
	const MyVector UpVector(float Xi, float Yi, float Zi);
	const MyVector ForwardVector(float Xi, float Yi, float Zi);
	const MyVector RightVector(float Xi, float Yi, float Zi);
	float Magnitude(void);
	MyVector Normalize(void);
	MyVector& operator+=(const MyVector& V);
	MyVector& operator-=(const MyVector& V);
	MyVector& operator*=(float S);
	MyVector& operator/=(float S);
	MyVector operator-(void);
};
inline MyVector operator+(MyVector u, MyVector v)
{
	float X = u.X + v.X;
	float Y = u.Y + v.Y;
	float Z = u.Z + v.Z;
	return MyVector(X, Y, Z);
}
inline MyVector operator-(MyVector u, MyVector v)
{
	float X = u.X - v.X;
	float Y = u.Y - v.Y;
	float Z = u.Z - v.Z;
	return MyVector(X, Y, Z);
}
inline MyVector  operator^(MyVector u, MyVector v)
{
	float X = ((u.Y * v.Z) - (u.Z * v.Y));
	float Y = ((u.Z * v.X) - (u.X * v.Z));
	float Z = ((u.X * v.Y) - (u.Y * v.X));
	return MyVector(X, Y, Z);
}
inline float operator*(MyVector u, MyVector v)
{
	float DotProduct = ((u.X * v.X) + (u.Y * v.Y) + (u.Z * v.Z));
	return DotProduct;
}
inline MyVector operator*(MyVector u, float s)
{
	float X = u.X * s;
	float Y = u.Y * s;
	float Z = u.Z * s;
	return MyVector(X, Y, Z);
}
inline MyVector operator/(MyVector u, float s)
{
	float X = u.X / s;
	float Y = u.Y / s;
	float Z = u.Z / s;
}
#pragma once
//v1.0 �ֱ�ʵ�ָ���ά�ȵ�����
//v2.0 ʹ��ģ����ʵ��

namespace Math {
	//��ά
	class Vector2D
	{
	public:
		float x, y;

	public:
		//Constructors
		Vector2D();
		Vector2D(float x, float y);
		Vector2D(const Vector2D& other);
		~Vector2D();

		//normalization
		Vector2D normalization();

		//operator
		Vector2D operator = (const Vector2D& other);
		Vector2D operator + (const Vector2D& other);
		Vector2D operator - (const Vector2D& other);
		Vector2D operator * (const float rhs);
		Vector2D operator / (const float rhs);
	};

	//��ά
	class Vector3D
	{
	public:
		float x, y, z;
	public:
		//Constructors
		Vector3D();
		Vector3D(float newX, float newY, float newZ);
		Vector3D(const Vector3D& other);
		~Vector3D();

		//operator
		Vector3D operator = (const Vector3D& other);
		Vector3D operator + (const Vector3D& other);
		Vector3D operator - (const Vector3D& other);
		Vector3D operator * (const float rhs);
		Vector3D operator / (const float rhs);
	};
}



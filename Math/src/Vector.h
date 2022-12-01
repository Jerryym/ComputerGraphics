#pragma once
//v1.0 �ֱ�ʵ�ָ���ά�ȵ�����
//v2.0 ʹ��ģ����ʵ��

namespace Math {
	//��άһ������������ͼ
	class Vector2D
	{
	public:
		float u, v;

	public:
		//Constructors
		Vector2D();
		Vector2D(float x, float y);
		Vector2D(const Vector2D& other);
		~Vector2D();

		//operator
		Vector2D& operator = (const Vector2D& other);
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
		Vector3D& operator = (const Vector3D& other);
	};
}



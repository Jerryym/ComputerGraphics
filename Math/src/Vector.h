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

		//length
		float getLength() const;

		//normalization
		Vector2D normalized();

		//dot��product
		float dot(const Vector2D& vec) const;

		//operator
		Vector2D operator = (const Vector2D& other);
		Vector2D operator + (const Vector2D& other);
		Vector2D operator - (const Vector2D& other);
		Vector2D operator * (const float rhs);
		Vector2D operator / (const float rhs);

		bool operator==(const Vector2D& rhs);
		bool operator!=(const Vector2D& rhs);

		void operator+=(const Vector2D& rhs);
		void operator-=(const Vector2D& rhs);
		void operator*=(const float rhs);
		void operator/=(const float rhs);

		Vector2D operator-() const;
		Vector2D operator+() const;
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

		//length
		float getLength() const;

		//normalization
		Vector3D normalized();

		//dot��product
		float dot(const Vector3D& vec) const;
		Vector3D product(const Vector3D& vec) const;

		//operator
		Vector3D operator = (const Vector3D& other);
		Vector3D operator + (const Vector3D& other);
		Vector3D operator - (const Vector3D& other);
		Vector3D operator * (const float rhs);
		Vector3D operator / (const float rhs);

		bool operator==(const Vector3D& rhs);
		bool operator!=(const Vector3D& rhs);
							  
		void operator+=(const Vector3D& rhs);
		void operator-=(const Vector3D& rhs);
		void operator*=(const float rhs);
		void operator/=(const float rhs);

		Vector3D operator-() const;
		Vector3D operator+() const;
	};

	//��ά
	class Vector4D
	{
	public:
		float x, y, z, w;
	public:
		//Constructors
		Vector4D();
		Vector4D(float newX, float newY, float newZ, float newW);
		Vector4D(const Vector4D& other);
		~Vector4D();

		//length
		float getLength() const;

		//normalization
		Vector4D normalized();

		//dot��product
		float dot(const Vector4D& vec) const;

		//operator
		Vector4D operator = (const Vector4D& other);
		Vector4D operator + (const Vector4D& other);
		Vector4D operator - (const Vector4D& other);
		Vector4D operator * (const float rhs);
		Vector4D operator / (const float rhs);

		bool operator==(const Vector4D& rhs);
		bool operator!=(const Vector4D& rhs);

		void operator+=(const Vector4D& rhs);
		void operator-=(const Vector4D& rhs);
		void operator*=(const float rhs);
		void operator/=(const float rhs);

		Vector4D operator-() const;
		Vector4D operator+() const;
	};
}



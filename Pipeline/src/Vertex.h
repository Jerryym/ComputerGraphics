#pragma once
#include "Vector.h"

namespace pipeline {
	/// @brief ������
	/// <summary>
	/// ���㣺������ļ��ϵ�λ
	/// �����а��������ԣ�
	///		λ�á���ɫ����������
	/// </summary>
	class Vertex
	{
	public:
		Math::Vector4D position;		//λ��
		Math::Vector4D color;			//��ɫ
		Math::Vector2D texcoord;		//����
		Math::Vector3D normal;			//����

	public:
		Vertex();
		Vertex(const Math::Vector4D& pos,
			   const Math::Vector4D& color, 
			   const Math::Vector2D& texture, 
			   const Math::Vector3D& normal);
		Vertex(const Vertex& RefObj);
		void operator=(const Vertex& RefObj);
		~Vertex();
	};

	/// @brief ƬԪ��
	/// <summary>
	///		ͨ����ɫ��ת���������Ļ����ϵ�µĶ�������
	/// </summary>
	class Fragment
	{
	public:
		Math::Vector4D posMToW;		//ģ������ϵ�µ�����ת��Ϊ��������ϵ�µ�����
		Math::Vector4D posVToP;		//��Ұ����ϵ�µ�����ת��ΪͶӰ����ϵ�µ�����
		Math::Vector4D color;
		Math::Vector2D textcoord;
		Math::Vector3D normal;
		double oneDivZ;				//��Ȳ���ָ��

	public:
		Fragment();
		Fragment(const Math::Vector4D& PMW,
				 const Math::Vector4D& PVP,
				 const Math::Vector4D& color,
			     const Math::Vector2D& texture,
				 const Math::Vector3D& normal,
				 const double rOneDivZ);
		Fragment(const Fragment& RefObj);
		void operator=(const Fragment& RefObj);
		~Fragment();
	};
}


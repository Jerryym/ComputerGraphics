#pragma once

#include <iostream>
#include <vector>
#include "Vertex.h"
#include "Vector.h"

namespace pipeline {
	/// @brief ������
	class Mesh
	{
	public:
		std::vector<Vertex> vertices;		//��������
		std::vector<unsigned int> indices;			//��������

	public:
		Mesh();
		Mesh(const Mesh& RefObj);
		~Mesh();

		Mesh& operator=(const Mesh& RefObj);

		/// @brief ���ö�������
		/// @param VO		Vertex Object = ������� 
		/// @param Count	��������Ķ������
		void setVertices(Vertex* VO, int Count);

		/// @brief	������������
		/// @param IO		Index Object = ��������
		/// @param Count	��������Ķ�����������
		void setIndices(unsigned int* IO, int Count);

		/// @brief	���ǻ�
		/// @param pos1 �����ε�һ����������
		/// @param pos2 �����εڶ�����������
		/// @param pos3 �����ε�������������
		void triangle(const Math::Vector4D& pos1, const Math::Vector4D& pos2, const Math::Vector4D& pos3);
	};
}


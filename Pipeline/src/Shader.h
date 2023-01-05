#pragma once

#include "Vertex.h"
#include "Vector.h"

namespace pipeline {
	/// @brief ��ɫ��ʽ
	enum ShaderMode 
	{
		Simple, 
		Gouraud,			//Gouraud����ģ��
		Blinning_Phone		//Blinning_Phone����ģ��
	};

	/// @brief ��Ⱦ��ʽ
	enum RenderMode
	{
		Wireframe,		//�߿�ģʽ
		Fill			//Ĭ��ģʽ
	};

	/// @brief ��ɫ���� ������
	class Shader
	{
	public:
		Shader() {};
		virtual ~Shader() {};

		/// @brief ������ɫ��
		/// @param vertexObj �������
		/// @return ����ƬԪ����
		virtual Fragment vertexShader(const Vertex& vertexObj) = 0;

		/// @brief Ƭ����ɫ��
		/// @param fragmentObj ƬԪ����
		/// @return ���ض�ӦƬԪ��ɫ
		virtual Math::Vector4D fragmentShader(const Fragment& fragmentObj) = 0;
	};
}



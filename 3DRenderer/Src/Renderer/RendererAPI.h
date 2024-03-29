#pragma once

#include "glm/glm.hpp"
#include "Renderer/VertexArray.h"

class RendererAPI
{
public:

	enum class API
	{
		None = 0, OpenGL = 1
	};

public:

	virtual void SetClearColor(const glm::vec4& color) = 0;
	virtual void Clear() = 0;
	virtual void Drawindexed(const std::shared_ptr<VertexArray>& vertexArray) = 0;

	inline API GetAPI() { return s_API; }
private:
	static API s_API;
};


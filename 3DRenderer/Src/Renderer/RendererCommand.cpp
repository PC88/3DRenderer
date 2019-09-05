#include "Renderer/RendererCommand.h"
#include "Renderer/OpenGL/OpenGlRendererAPI.h"

RendererAPI* RenderCommand::s_RendererAPI = new OpenGLRendererAPI;
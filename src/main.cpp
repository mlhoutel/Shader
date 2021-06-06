#include <stdio.h>

#include "engine.h"
#include "window.h"
#include "shader.h"
#include "gl_utils.h"
#include "renderer2d.h"

int main()
{
    Window window("Shader", 960, 540, true);
    window.Create();

    Shader shader("Raytracing", "res/shader.vert", "res/shader.frag");
    if (!shader.Create()) { return 1; }

    Renderer2D renderer(shader, window.GetDataPointer(), 100);
    renderer.Create();

    // Setup ImGui

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();

    ImGui::StyleColorsDark();

    ImGui_ImplGlfw_InitForOpenGL(window.GetGlfwWindow(), true);
    ImGui_ImplOpenGL3_Init("#version 130");

    bool show_demo_window = true;

    while (!window.ShouldClose())
    {
        glClear(GL_COLOR_BUFFER_BIT);

        renderer.Start();

        renderer.DrawQuad(glm::vec2(), glm::vec2(window.GetSize().x, window.GetSize().y), glm::vec4(1,1,1,1));

        renderer.End();

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        renderer.DrawImGui();

        // if (show_demo_window) { ImGui::ShowDemoWindow(&show_demo_window); }

        ImGui::Render();
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        window.Update();
    }

    renderer.Destroy();

    shader.Destroy();

    window.Destroy();
}
#include "Imgui_wrapper.h";

int main() {

    Imgui_wrapper ui = Imgui_wrapper();
    bool error_ = false;
    ui.setup(1280, 720, "basic", error_);
    if (error_) {
        return 1;
    }

    while (!glfwWindowShouldClose(ui.window)) {

        ui.update();
        
        ui.Render();
   
    }

    ui.Destruct();

    return 0;

}






#pragma once

#include "IDKengine/IDKengine.hpp"
#include "imgui-1.89.7/imgui.h"
#include "imgui-1.89.7/imgui_impl_sdl2.h"
#include "imgui-1.89.7/imgui_impl_opengl3.h"
#include "imgui-1.89.7/imgui_stdlib.h"


class ImGui_Module: public idk::Module
{
private:
    
    std::string m_menu_action = "";

    void        f_settings_pointlight( idk::Engine &engine );
    void        f_settings_dirlight( idk::Engine &engine );
    void        f_settings_skybox( idk::Engine &engine );
    void        f_settings_objects( idk::Engine &engine );
    void        f_settings_camera( idk::Engine &engine );
    void        f_settings_graphics( idk::Engine &engine );
    void        f_main_menu_bar();

public:
    void        init( idk::Engine & );
    void        stage_A( idk::Engine & );
    void        stage_B( idk::Engine & );
    void        stage_C( idk::Engine & );

};


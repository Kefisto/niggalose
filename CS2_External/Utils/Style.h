#pragma once
#include "..\OS-ImGui\OS-ImGui_External.h"

namespace Styles
{
    inline void NiggaLose()
    {
        // NIGGALOSE style from ImThemes
        ImGuiStyle& style = ImGui::GetStyle();

        style.Alpha = 1.0f;
        style.DisabledAlpha = 0.5f;
        style.WindowPadding = ImVec2(6.0f, 3.0f);
        style.WindowRounding = 7.0f;
        style.WindowBorderSize = 1.0f;
        style.WindowMinSize = ImVec2(32.0f, 32.0f);
        style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
        style.WindowMenuButtonPosition = ImGuiDir_Left;
        style.ChildRounding = 5.0f;
        style.ChildBorderSize = 1.0f;
        style.PopupRounding = 5.0f;
        style.PopupBorderSize = 1.0f;
        style.FramePadding = ImVec2(5.0f, 1.0f);
        style.FrameRounding = 3.0f;
        style.FrameBorderSize = 1.0f;
        style.ItemSpacing = ImVec2(8.0f, 4.0f);
        style.ItemInnerSpacing = ImVec2(4.0f, 4.0f);
        style.CellPadding = ImVec2(4.0f, 2.0f);
        style.IndentSpacing = 21.0f;
        style.ColumnsMinSpacing = 6.0f;
        style.ScrollbarSize = 13.0f;
        style.ScrollbarRounding = 16.0f;
        style.GrabMinSize = 20.0f;
        style.GrabRounding = 2.0f;
        style.TabRounding = 4.0f;
        style.TabBorderSize = 1.0f;
        style.TabMinWidthForCloseButton = 0.0f;
        style.ColorButtonPosition = ImGuiDir_Right;
        style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
        style.SelectableTextAlign = ImVec2(0.0f, 0.0f);

        style.Colors[ImGuiCol_Text] = ImVec4(1.0f, 0.9999899864196777f, 0.9999994039535522f, 1.0f);
        style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.6952790021896362f, 0.6952720284461975f, 0.6952785849571228f, 1.0f);
        style.Colors[ImGuiCol_WindowBg] = ImVec4(0.09803921729326248f, 0.0f, 0.09019608050584793f, 1.0f);
        style.Colors[ImGuiCol_ChildBg] = ImVec4(0.06437766551971436f, 0.0f, 0.05922748893499374f, 0.8884119987487793f);
        style.Colors[ImGuiCol_PopupBg] = ImVec4(0.062745101749897f, 0.0f, 0.05882352963089943f, 0.8901960849761963f);
        style.Colors[ImGuiCol_Border] = ImVec4(1.0f, 0.0f, 0.9333333373069763f, 1.0f);
        style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
        style.Colors[ImGuiCol_FrameBg] = ImVec4(1.0f, 0.0f, 0.9333333373069763f, 0.1759656667709351f);
        style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(1.0f, 0.2231759428977966f, 0.9482125043869019f, 0.3819742202758789f);
        style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.3819742202758789f, 0.0f, 0.356509655714035f, 0.540772557258606f);
        style.Colors[ImGuiCol_TitleBg] = ImVec4(0.09803921729326248f, 0.0f, 0.09019608050584793f, 1.0f);
        style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.09803921729326248f, 0.0f, 0.09019608050584793f, 1.0f);
        style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.3047210574150085f, 0.0f, 0.2803435325622559f, 1.0f);
        style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.3004291653633118f, 0.0f, 0.2763949930667877f, 1.0f);
        style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.1502146124839783f, 0.0f, 0.1408259868621826f, 1.0f);
        style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(1.0f, 0.9999899864196777f, 0.9999992251396179f, 0.7682403326034546f);
        style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.8755365014076233f, 0.8755277395248413f, 0.8755320310592651f, 1.0f);
        style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.6781115531921387f, 0.6781047582626343f, 0.6781077980995178f, 1.0f);
        style.Colors[ImGuiCol_CheckMark] = ImVec4(0.9999899864196777f, 0.9999945759773254f, 1.0f, 1.0f);
        style.Colors[ImGuiCol_SliderGrab] = ImVec4(1.0f, 0.9999899864196777f, 0.9999992251396179f, 1.0f);
        style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.7038626670837402f, 0.7038556337356567f, 0.7038620710372925f, 1.0f);
        style.Colors[ImGuiCol_Button] = ImVec4(0.09871244430541992f, 0.0f, 0.09081550687551498f, 1.0f);
        style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.4077253341674805f, 0.0f, 0.3751075267791748f, 1.0f);
        style.Colors[ImGuiCol_ButtonActive] = ImVec4(9.999999974752427e-07f, 0.0f, 9.200005592902016e-07f, 1.0f);
        style.Colors[ImGuiCol_Header] = ImVec4(0.09803921729326248f, 0.0f, 0.09019608050584793f, 1.0f);
        style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.4206008315086365f, 0.0f, 0.3869529962539673f, 1.0f);
        style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.09803921729326248f, 0.0f, 0.09019608050584793f, 1.0f);
        style.Colors[ImGuiCol_Separator] = ImVec4(1.0f, 0.9999978542327881f, 0.9999899864196777f, 0.5f);
        style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.9999899864196777f, 0.999995231628418f, 1.0f, 0.7799999713897705f);
        style.Colors[ImGuiCol_SeparatorActive] = ImVec4(0.9999899864196777f, 0.9999945759773254f, 1.0f, 1.0f);
        style.Colors[ImGuiCol_ResizeGrip] = ImVec4(1.0f, 0.0f, 0.9200005531311035f, 0.4935622215270996f);
        style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(1.0f, 0.0f, 0.92156982421875f, 0.6394850015640259f);
        style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.733905553817749f, 0.0f, 0.6763452291488647f, 0.4941176474094391f);
        style.Colors[ImGuiCol_Tab] = ImVec4(1.0f, 0.3605149984359741f, 0.0f, 0.0f);
        style.Colors[ImGuiCol_TabHovered] = ImVec4(0.991416335105896f, 0.5181589126586914f, 0.2510453462600708f, 0.0f);
        style.Colors[ImGuiCol_TabActive] = ImVec4(1.0f, 0.0f, 0.92156982421875f, 0.0f);
        style.Colors[ImGuiCol_TabUnfocused] = ImVec4(0.06666667014360428f, 0.1019607856869698f, 0.1450980454683304f, 0.0f);
        style.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.1333333402872086f, 0.2588235437870026f, 0.4235294163227081f, 0.0f);
        style.Colors[ImGuiCol_PlotLines] = ImVec4(0.8588235378265381f, 0.929411768913269f, 0.886274516582489f, 0.6299999952316284f);
        style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.9999919533729553f, 1.0f, 0.9999899864196777f, 1.0f);
        style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.8588235378265381f, 0.929411768913269f, 0.886274516582489f, 0.6299999952316284f);
        style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.0f, 0.0f, 0.92156982421875f, 0.721030056476593f);
        style.Colors[ImGuiCol_TableHeaderBg] = ImVec4(0.2017146944999695f, 0.2017146944999695f, 0.2017167210578918f, 1.0f);
        style.Colors[ImGuiCol_TableBorderStrong] = ImVec4(0.4034294486045837f, 0.4034294486045837f, 0.4034335017204285f, 1.0f);
        style.Colors[ImGuiCol_TableBorderLight] = ImVec4(9.999899930335232e-07f, 9.999899930335232e-07f, 9.999999974752427e-07f, 0.0f);
        style.Colors[ImGuiCol_TableRowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
        style.Colors[ImGuiCol_TableRowBgAlt] = ImVec4(9.999999974752427e-07f, 9.999899930335232e-07f, 9.999899930335232e-07f, 0.2231759428977966f);
        style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.729613721370697f, 0.7296063899993896f, 0.7296098470687866f, 0.4300000071525574f);
        style.Colors[ImGuiCol_DragDropTarget] = ImVec4(1.0f, 1.0f, 0.0f, 0.8999999761581421f);
        style.Colors[ImGuiCol_NavHighlight] = ImVec4(0.2588235437870026f, 0.5882353186607361f, 0.9764705896377563f, 1.0f);
        style.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.0f, 1.0f, 1.0f, 0.699999988079071f);
        style.Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.800000011920929f, 0.800000011920929f, 0.800000011920929f, 0.2000000029802322f);
        style.Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.800000011920929f, 0.800000011920929f, 0.800000011920929f, 0.3499999940395355f);
    }
}
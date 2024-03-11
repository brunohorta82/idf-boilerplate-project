#include "main.hpp"
#include <esp_log.h>
#define TAG "MY PROJECT"

esp_err_t General::Core::setup()
{
    ESP_LOGI(TAG, "SETUP");
    ESP_LOGI(TAG, "Device ID:%s", getDeviceId());
    return ESP_OK;
}

void General::Core::run()
{
    ESP_LOGI(TAG, "LOOP");
    vTaskDelay(pdMS_TO_TICKS(5000));
}

extern "C" void app_main()
{
    General::Core core;
    core.setup();
    while (true)
    {
        core.run();
    }
}
/* Component Template
   This example code is in the Public Domain (or CC0 licensed, at your option.)
   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "esp_log.h"
#include "my_component.h"

static const char *TAG = "my-component";
uint32_t blink_counter = 0;

void my_component_blink_counter(void)
{
    blink_counter++;
    ESP_LOGI(TAG, "Blink Counter: %ld blinks", blink_counter);
}

#ifndef ESP32_FLAG_ACCEL_I2C_MASTER_H
#define ESP32_FLAG_ACCEL_I2C_MASTER_H

#define I2C_MASTER_SCL_IO           3         /*!< GPIO number used for I2C master clock. */
#define I2C_MASTER_SDA_IO           2         /*!< GPIO number used for I2C master data. */
#define I2C_MASTER_NUM              0         /*!< I2C master i2c port number. */
#define I2C_MASTER_FREQ_HZ          400000    /*!< I2C master clock frequency. */
#define I2C_MASTER_TX_BUF_DISABLE   0         /*!< I2C master doesn't need buffer. */
#define I2C_MASTER_RX_BUF_DISABLE   0         /*!< I2C master doesn't need buffer. */
#define I2C_MASTER_TIMEOUT_MS       1000

esp_err_t i2c_master_init(void);

#endif //ESP32_FLAG_ACCEL_I2C_MASTER_H

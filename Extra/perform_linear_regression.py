# The problem is to perform an linear regression on two differnet data set
#Also using it create an modal

# Task - 1

import numpy as np
import pandas as pd

# Data from the table
data = {
    'Preparation_Time': [8.5, 12, 16, 10, 7, 12, 9, 6, 5.5, 15, 13, 8, 1, 2.5, 7],
    'Test_Score': [72, 60, 47, 45, 83, 30, 29, 63, 33, 4, 91, 50, 78, 49, 99]
}

# Convert data to DataFrame
df = pd.DataFrame(data)

# Extracting the values
X = df['Preparation_Time'].values
y = df['Test_Score'].values

# Calculating the mean of X and y
mean_x = np.mean(X)
mean_y = np.mean(y)

# Calculating the slope (m) and intercept (c)
numerator = np.sum((X - mean_x) * (y - mean_y))
denominator = np.sum((X - mean_x) ** 2)
m = numerator / denominator
c = mean_y - m * mean_x

# Define custom function for prediction
def predict_score(hours):
    return m * hours + c

# Testing the function with an example
print(f"Predicted score for 10 hours of preparation: {predict_score(10):.2f}")

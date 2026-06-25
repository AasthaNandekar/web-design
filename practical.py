import pandas as pd

# Create a sample DataFrame
data = {
    'Name': ['Amit', 'Riya', 'John', 'Sara', 'Raj'],
    'Age': [23, 21, 25, 22, 24],
    'Marks': [85, 90, 78, 88, 92]
}

df = pd.DataFrame(data)

print("Original DataFrame:")
print(df)

# Filter: Students with Marks > 85
filtered_df = df[df['Marks'] > 85]

print("\nFiltered DataFrame (Marks > 85):")
print(filtered_df)

# Select specific columns
selected_columns = df[['Name', 'Marks']]

print("\nSelected Columns (Name and Marks):")
print(selected_columns)
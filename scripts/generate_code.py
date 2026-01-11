import os
import random
import datetime

# Directory with source code
SRC_DIR = "../src"

# Different programming languages
LANGUAGES = {
    'python': {
        'ext': '.py',
        'comment': '#',
        'templates': [
            'def {func_name}():\n    {comment} Generated function {timestamp}\n    result = {random_value}\n    for i in range({loop_range}):\n        result += i * {multiplier}\n    return result\n',
            'class {class_name}:\n    {comment} Generated class {timestamp}\n    \n    def __init__(self):\n        self.value = {random_value}\n        self.created = "{timestamp}"\n    \n    def process(self):\n        return self.value * {multiplier}\n'
        ]
    },
    'javascript': {
        'ext': '.js',
        'comment': '//',
        'templates': [
            'function {func_name}() {{\n    {comment} Generated function {timestamp}\n    let result = {random_value};\n    for (let i = 0; i < {loop_range}; i++) {{\n        result += i * {multiplier};\n    }}\n    return result;\n}}',
            'class {class_name} {{\n    {comment} Generated class {timestamp}\n    constructor() {{\n        this.value = {random_value};\n        this.created = "{timestamp}";\n    }}\n\n    process() {{\n        return this.value * {multiplier};\n    }}\n}}'
        ]
    },
    'java': {
        'ext': '.java',
        'comment': '//',
        'templates': [
            'public class {class_name} {{\n    {comment} Generated class {timestamp}\n    \n    private int value = {random_value};\n    private String created = "{timestamp}";\n    \n    public int process() {{\n        int result = value;\n        for (int i = 0; i < {loop_range}; i++) {{\n            result += i * {multiplier};\n        }}\n        return result;\n    }}\n}}'
        ]
    },
    'cpp': {
        'ext': '.cpp',
        'comment': '//',
        'templates': [
            '#include <iostream>\n#include <string>\nusing namespace std;\n\nclass {class_name} {{\npublic:\n    {comment} Generated class {timestamp}\n    int value = {random_value};\n    string created = "{timestamp}";\n    \n    int process() {{\n        int result = value;\n        for (int i = 0; i < {loop_range}; i++) {{\n            result += i * {multiplier};\n        }}\n        return result;\n    }}\n}};\n\nint main() {{\n    {class_name} obj;\n    cout << obj.process() << endl;\n    return 0;\n}}'
        ]
    },
    'go': {
        'ext': '.go',
        'comment': '//',
        'templates': [
            'package main\n\nimport "fmt"\n\ntype {class_name} struct {{\n    {comment} Generated struct {timestamp}\n    Value int\n    Created string\n}}\n\nfunc (c *{class_name}) Process() int {{\n    result := c.Value\n    for i := 0; i < {loop_range}; i++ {{\n        result += i * {multiplier}\n    }}\n    return result\n}}\n\nfunc main() {{\n    obj := {class_name}{{Value: {random_value}, Created: "{timestamp}"}}\n    fmt.Println(obj.Process())\n}}'
        ]
    }
}

def generate_code():
    # Create src directory if it doesn't exist
    if not os.path.exists(SRC_DIR):
        os.makedirs(SRC_DIR)
    
    # Select random language
    lang_name, lang = random.choice(list(LANGUAGES.items()))
    
    # Generate file name
    timestamp = datetime.datetime.now().strftime("%Y%m%d_%H%M%S_%f")
    if lang_name in ['java', 'cpp', 'go']:
        # For languages that require class name = file name
        class_name = f"Generated{timestamp[:8]}"
        file_name = f"{class_name}{lang['ext']}"
        func_name = None
    else:
        class_name = None
        func_name = f"generated_function_{timestamp[:8]}"
        file_name = f"{func_name}{lang['ext']}"
    
    # Select random template
    template = random.choice(lang['templates'])
    
    # Generate random values
    random_value = random.randint(10, 1000)
    loop_range = random.randint(5, 50)
    multiplier = random.randint(2, 10)
    
    # Format the code
    code = template.format(
        func_name=func_name,
        class_name=class_name or f"Generated{timestamp[:8]}",
        comment=lang['comment'],
        timestamp=timestamp,
        random_value=random_value,
        loop_range=loop_range,
        multiplier=multiplier
    )
    
    # Write to file
    file_path = os.path.join(SRC_DIR, file_name)
    with open(file_path, 'w') as f:
        f.write(code)
    
    print(f"Generated {file_path}")
    return file_path

if __name__ == "__main__":
    generate_code()
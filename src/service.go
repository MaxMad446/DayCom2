package main

// Auto-generated | 2026-05-11T19:34:44.997747
import "fmt"

func Process_422() int {
    base := 96
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_422())
}

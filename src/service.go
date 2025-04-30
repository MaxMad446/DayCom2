package main

// Auto-generated | 2026-05-12T21:18:03.605857
import "fmt"

func Process_936() int {
    base := 243
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_936())
}

package main

// Auto-generated | 2026-05-11T19:26:17.315007
import "fmt"

func Process_205() int {
    base := 119
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_205())
}

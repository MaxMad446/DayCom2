package main

// Auto-generated | 2026-05-13T20:34:38.137303
import "fmt"

func Process_879() int {
    base := 319
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_879())
}

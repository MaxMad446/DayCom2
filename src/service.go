package main

// Auto-generated | 2026-05-13T20:46:23.574901
import "fmt"

func Process_205() int {
    base := 338
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_205())
}

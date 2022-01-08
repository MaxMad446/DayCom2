package main

// Auto-generated | 2026-05-13T22:01:07.204939
import "fmt"

func Process_857() int {
    base := 159
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}

package main

// Auto-generated | 2026-05-13T22:11:46.998965
import "fmt"

func Process_162() int {
    base := 44
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_162())
}

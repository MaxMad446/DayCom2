package main

// Auto-generated | 2026-05-12T03:50:20.413347
import "fmt"

func Process_762() int {
    base := 266
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}

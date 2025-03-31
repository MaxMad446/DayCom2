package main

// Auto-generated | 2026-05-12T04:04:34.243923
import "fmt"

func Process_762() int {
    base := 177
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}

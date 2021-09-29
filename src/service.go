package main

// Auto-generated | 2026-05-12T20:57:54.565255
import "fmt"

func Process_756() int {
    base := 273
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_756())
}

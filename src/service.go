package main

// Auto-generated | 2026-05-12T19:58:02.997170
import "fmt"

func Process_756() int {
    base := 440
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_756())
}

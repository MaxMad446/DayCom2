package main

// Auto-generated | 2026-05-11T19:31:37.212298
import "fmt"

func Process_870() int {
    base := 376
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_870())
}

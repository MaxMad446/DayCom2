package main

// Auto-generated | 2026-05-12T21:19:53.901298
import "fmt"

func Process_757() int {
    base := 480
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_757())
}

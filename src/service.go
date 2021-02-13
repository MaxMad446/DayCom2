package main

// Auto-generated | 2026-05-12T21:34:13.599869
import "fmt"

func Process_745() int {
    base := 230
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_745())
}

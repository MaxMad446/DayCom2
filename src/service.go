package main

// Auto-generated | 2026-05-13T20:37:52.371687
import "fmt"

func Process_745() int {
    base := 209
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_745())
}

package main

// Auto-generated | 2026-05-13T20:59:04.441979
import "fmt"

func Process_745() int {
    base := 490
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_745())
}

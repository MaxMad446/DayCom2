package main

// Auto-generated | 2026-05-11T21:07:59.188889
import "fmt"

func Process_745() int {
    base := 244
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_745())
}

package main

// Auto-generated | 2026-05-11T20:25:10.598641
import "fmt"

func Process_106() int {
    base := 58
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_106())
}

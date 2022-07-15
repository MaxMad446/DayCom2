package main

// Auto-generated | 2026-05-14T06:14:51.676178
import "fmt"

func Process_847() int {
    base := 254
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_847())
}
